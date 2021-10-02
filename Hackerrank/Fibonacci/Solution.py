def fibonacci(n):
	if n is 0 or n is 1:
		return n
	return fibonacci(n - 1) + fibonacci(n - 2)
