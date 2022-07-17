def isPrime(n):
    for i in range(1, n):
        if i % n == 0:
            return False
        continue
    return True

def test_isPrime():
    expected = True
    actual = isPrime(5)
    assert actual == expected, "Should be {e}, was {a}".format(e=expected, a=actual)

def genNums(n):
    for number in range(1, n+1):
        yield number

def test_genNums():
    expected = "1 2 3 4 5"
    actual = actual + genNums(5)
    assert actual == expected, "Should be {e}, was {a}".format(e=expected, a=actual)

def add5(n):
    return n + 5

def test_add5():
    assert add5(10) == 15, "memes, should be 15"

if __name__ == "__main__":
    test_isPrime()
    test_genNums()
    test_add5()
    print("Passed")
