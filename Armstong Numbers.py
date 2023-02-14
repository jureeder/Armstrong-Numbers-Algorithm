# An armstrong number is a number whose digits squared by the number of digits is equal to the number

number_int = int(input("Upper bound: "))
num = number_int
armstrong_numbers = []

while number_int > 0:
    parse = number_int  # Parse is a temp variable that is only used to increment num_digits
    num_digits = 0  # The power of 10 of the number
    number_str = str(number_int)

    while parse >= 1:  # This will set the num_digits
        parse = parse/10
        num_digits += 1

    temp = []
    for iterate in number_str:
        temp.append(int(iterate)**num_digits)

    if sum(temp) == number_int:
        armstrong_numbers.append(sum(temp))

    # print(number_int, num_digits, temp, sep=' | ')
    number_int -= 1

print("All armstrong numbers from 0 to", num, "are:")
for i in armstrong_numbers:
    print(i, end=' ')
