from bs4 import BeautifulSoup

from selenium import webdriver
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.firefox.options import Options
from selenium.webdriver.support import expected_conditions as EC 
from selenium.webdriver.support.ui import Select
from selenium.webdriver.common.by import By
from selenium.common.exceptions import TimeoutException

import re
import time

class AmazonBot(object):

    def __init__(self, items):
        self.amazon_url = "https://www.amazon.ca/"
        self.items = items

        self.profile = webdriver.FirefoxProfile()
        self.options = Options()
        self.driver = webdriver.Firefox(firefox_profile=self.profile,
                                        firefox_options=self.options)

        self.driver.get(self.amazon_url)

    def search_items(self):
        urls = []
        prices = []
        names = []
        for item in self.items:
            print(f"Searching for {item}.")

            self.driver.get(self.amazon_url)

            search_input = self.driver.find_element_by_id("twotabsearchtextbox")
            search_input.send_keys(item)

            time.sleep(5)

            search_button = self.driver.find_element_by_xpath('//*[@id="nav-search"]/form/div[2]/div/input')
            search_button.click()

            time.sleep(10)

            first_result = self.driver.find_element_by_id("result_0")
            asin = first_result.get_attribute("data-asin")
            url = "https://www.amazon.ca/dp/" + asin
            price = self.get_product_price(url)
            name = self.get_product_name(url)

            prices.append(price)
            urls.append(url)
            names.append(name)

            print(name)
            print(price)
            print(url)

            time.sleep(5)

        return prices, urls, names
    
    def get_product_price(self, url):
        self.driver.get(url)

        try:
            price = self.driver.find_element_by_id("priceblock_ourprice").text
        except:
            pass

        try:
            price = self.driver.find_element_by_id("priceblock_dealprice").text
        except:
            pass

        if price is None:
            price = "Not Avaiable"

        else:
            non_decimal = re.compile(r'[^\d.]+')
            price = non_decimal.sub('',price)
        
        return price

    def get_product_name(self, url):
        self.driver.get(url)
        try:
            product_name = self.driver.find_element_by_id("productTitle").text
        except:
            pass

        if product_name is None:
            product_name = "Not Avaiable"

        return product_name
