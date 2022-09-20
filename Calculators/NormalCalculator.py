def get_number(mesg=''):
    flag = True
    while flag:
            number = input("{}".format(mesg))
            if number.isdigit():
                number = int(number)
                flag = False
    return number
    
print("Калькулятор")
opt_type = {'+':['сложение','add','+'], '-':['вычитание','sub','-'], '*':['умножение','mul', '*'], '/':['деление','div','/']}
while True:
    
    first_number = get_number("Первое число:")
    second_number = get_number("Второе число:")
    
    flag = True
    while flag:
        operation = input("Введите тип операции (сложение, вычитание, умножение, деление): ")
        operation.lower
        for i in opt_type:
            if operation in opt_type[i]:
                flag = False
                answer = eval('{}{}{}'.format(first_number,i,second_number))
    
    print(answer)