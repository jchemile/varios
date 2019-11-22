import csv

with open('employee_file.csv', mode = 'w') as employee_file:
	employee_writer = csv.writer(employee_file, delimiter=",", quotechar = '"', quoting = csv.QUOTE_MINIMAL)

	employee_writer.writerow(['Johm Smith', 'Accounting', 'November'])
	employee_writer.writerow(['Erica Meyer', 'IT', 'Marchemployee_writer.writerow(["Johm Smith", "Accounting", "November"])'])

	