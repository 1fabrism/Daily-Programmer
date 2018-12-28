#!usr/bin/env
#TODO:
#   sanitize user input

def check12():
    #step 1
    str_number = raw_input("Enter an 11 digit number: ")    
    while (len(str_number) < 11):           #If input is less than 11 digits, pad with leading zeroes
        str_number = "0"+str_number        
    even_digits = [int(str_number[i]) for i in range(0, len(str_number)) if i%2==0]
    evensum = sum(even_digits)

    #step 2
    evensum *= 3

    #step 3
    odd_digits = [int(str_number[i]) for i in range(0, len(str_number)) if i%2!=0]
    oddsum = sum(odd_digits)
    totalsum = oddsum + evensum

    #step 4
    M = totalsum % 10

    #step 5
    if M == 0 :
        check = 0 
    else:
        check = 10-M
    return [check, str_number+str(check)]

if __name__ == "__main__":
    [check, upc] = check12()  
    print("Correct check digit is: {}. Complete UPC is: {}.".format(check,upc))

