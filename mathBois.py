def isPrime(n):
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

def test_isPrime():
    assertEqual(True, isPrime(5))
    assertEqual(False, isPrime(8))

def primeAfter(n):
    n += 1
    while isPrime(n) == False:
        n += 1
    return n

def test_primeAfter():
    assertEqual(2, primeAfter(0))
    assertEqual(2, primeAfter(1))
    assertEqual(5, primeAfter(4))
    assertEqual(5, primeAfter(3))
    assertEqual(7, primeAfter(5))
    assertEqual(1987, primeAfter(1979))

def nthPrime(n):
    y = 0
    z = 1
    while y < n:
        z += 1
        if isPrime(z):
            y += 1
    return z

def test_nthPrime():
    assertEqual(1993, nthPrime(301))

# O(n+5) complexity
def generateId(n):
    identifier = ""
    lastPrime = 2
    i = 0
    while len(identifier) < n + 5:
        identifier += str(lastPrime)
        lastPrime = primeAfter(lastPrime)
        i += 1
    return identifier[n:n+5]

def test_generateId():
    assertEqual("23571", generateId(0))
    assertEqual("35711", generateId(1))
    assertEqual("71113", generateId(3))
    assertEqual("19232", generateId(10))
    assertEqual("02192", generateId(10000))

# Doesn't work, can't be stuffed fixing
# def generateIdWithNthPrime(n):
#     count = 0
#     if n == 0:
#         count = 1
#     identifier = ""
#     while len(identifier) <= 5:
#         identifier += str(nthPrime(n+count))
#         count += 1
#     print "nth: {count}".format(count=count)
#     return identifier[n:n+5]
# 
# def test_generateIdWithNthPrime():
#     assertEqual("23571", generateIdWithNthPrime(0))
#     assertEqual("35711", generateIdWithNthPrime(1))
#     assertEqual("71113", generateIdWithNthPrime(3))
#     assertEqual("19232", generateIdWithNthPrime(10))

# FIXME: Dunno how yield works lel
# def genNums(n):
#     for number in range(1, n+1):
#         yield number
# 
# def test_genNums():
#     expected = "1 2 3 4 5"
#     actual = genNums(5)
#     assert actual == expected, "Should be {e}, was {a}".format(e=expected, a=actual)
#

def add5(n):
     return n + 5

def test_add5():
    assert add5(10) == 15, "memes, should be 15"

def assertEqual(expected, actual):
    assert actual == expected, "Should be {e}, was {a}".format(e=expected, a=actual)

if __name__ == "__main__":
    test_isPrime()
    test_primeAfter()
    test_generateId()
    print("Passed")
