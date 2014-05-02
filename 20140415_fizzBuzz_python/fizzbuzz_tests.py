import unittest
import fizzbuzz

class FizzBuzzTest(unittest.TestCase):
    def testFizzNumbers(self):
        assert fizzbuzz.convertNumberToOutputString(3) == "Fizz"
        assert fizzbuzz.convertNumberToOutputString(6) == "Fizz"
        assert fizzbuzz.convertNumberToOutputString(9) == "Fizz"

    def testBuzzNumbers(self):
        assert fizzbuzz.convertNumberToOutputString(5) == "Buzz"
        assert fizzbuzz.convertNumberToOutputString(10) == "Buzz"
        assert fizzbuzz.convertNumberToOutputString(20) == "Buzz"

    def testFizzBuzzNumbers(self):
        assert fizzbuzz.convertNumberToOutputString(15) == "FizzBuzz"
        assert fizzbuzz.convertNumberToOutputString(30) == "FizzBuzz"
        assert fizzbuzz.convertNumberToOutputString(60) == "FizzBuzz"

    def testPlainNumbers(self):
        assert fizzbuzz.convertNumberToOutputString(1) == "1"
        assert fizzbuzz.convertNumberToOutputString(2) == "2"
        assert fizzbuzz.convertNumberToOutputString(4) == "4"
        
if __name__ == "__main__":
    unittest.main()

    for i in xrange(1,100):
        print fizzbuzz.convertNumberToOutputString(i)
