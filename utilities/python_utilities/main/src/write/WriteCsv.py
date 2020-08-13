import datetime
import time
import csv


parar = 10
ltiempo = []
while (parar > 0):
    hora = datetime.datetime.now()
    print(hora)
    time.sleep(1)
    ltiempo.append(hora)
    parar -= 1

f = open("hora.csv", "w")
writer = csv.DictWriter(f, fieldnames=ltiempo)
writer.writeheader()
f.close()