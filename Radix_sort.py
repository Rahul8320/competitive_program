def bucket_sort(items_with_keys):
	buckets = [[] for n in range(0, 100)]
	sorted_items = []
	for (key, item) in items_with_keys:
		buckets[key].append(item)
		#print(buckets)
	
	#print("sorting ....")
	for bucket in buckets:
		sorted_items.extend(bucket)
		#print(sorted_items)
	#print("Sorting Successful..!")
	return sorted_items

def get_digit(digit, number):
    # ** is integer pow() 
    # // is integer division
    if number < 10 ** digit:
        return 0
    return number // 10**digit % 10


def get_digit_number_tuples(digit, numbers):
    """Make a (digit value, number) tuple for bucket sort"""
    return [(get_digit(digit, n), n) for n in numbers]
    
def get_max_digits(numbers):
    """Figure out how many leading 0's the numbers need
    to be padded with"""
    return len(str(max(numbers)))
    
def radix_sort(numbers):
    """Sort from the least significant digit to
    the most significant digit"""
    for d in range(0, get_max_digits(numbers)):
        numbers_with_digits = get_digit_number_tuples(d, numbers)
        numbers = bucket_sort(numbers_with_digits)
        print(numbers)
    return numbers

def main():
	numbers = [9999,9990,1000,200,9990,100,99]
	numbers = radix_sort(numbers)
	print(numbers)
	
main()
