
def convertNumberToOutputString(inputNumber):
    returnValue = ""
    if (inputNumber % 3) == 0:
        returnValue += "Fizz"
    if (inputNumber % 5) == 0:
        returnValue += "Buzz"

    if len(returnValue) == 0:
        returnValue += str(inputNumber)

    return returnValue
