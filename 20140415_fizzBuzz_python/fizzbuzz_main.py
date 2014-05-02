import fizzbuzz

class FizzBuzzApp:
    def run(self):
        for i in xrange(1,100):
            print fizzbuzz.convertNumberToOutputString(i)

if __name__ == "__main__":
    app = FizzBuzzApp()
    app.run()
