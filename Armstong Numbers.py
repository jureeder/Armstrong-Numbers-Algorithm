# An armstrong number is a number whose digits squared by the number of digits is equal to the number

def main():
    number = input("Upper bound: ")
    number_int = int(number)    # number_int is used to allow a mutable number value to increment through
    armstrong_numbers = []

    while number_int > 0:
        parse = number_int  # Parse is a temp variable that is only used to increment power
        power = 0  # The power of 10 of the number
        number_str = str(number_int)
        temp = []

        while parse >= 1:  # Sets the number of digits each iteration to the power var
            parse = parse/10
            power += 1

        for i in number_str:  # makes a list of all the digits to the power of the amount of digits
            temp.append(int(i)**power)

        if sum(temp) == number_int:    # Compares the sum of all the digits to the power of number of digits to the original number
            armstrong_numbers.append(sum(temp))
            
        number_int -= 1    # Needed to increment down for each iteration

    print("All armstrong numbers from 0 to", number, "are:")
    for i in armstrong_numbers:    # Prints the list in a nice format.
        print(i, end=' ')

main()
