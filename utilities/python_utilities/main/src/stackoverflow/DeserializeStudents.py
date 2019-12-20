students = [
    {
        "name" : "Jacob Martin",
        "father name" : "Ros Martin",
        "Address" : "123 Hill Street",
    }, {
        "name" : "Angela Stevens",
        "father name" : "Robert Stevens",
        "Address" : "3 Upper Street London",
    }, {
        "name" : "Ricky Smart",
        "father name" : "William Smart",
        "Address" : "Unknown",
    }
]

name_list = []

for student in students:
    name_list.append(student['name'])

print(name_list)

name_list2 = [student['name'] for student in students]

print(name_list2)