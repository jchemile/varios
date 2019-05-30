import cv2 as cv

original_image = cv.imread('family.jpg')

grayscale_image = cv.cvtColor(original_image, cv.COLOR_BGR2GRAY)
