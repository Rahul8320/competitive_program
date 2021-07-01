#!/usr/bin/python3

def bucket_sort(items_with_keys):
	buckets = [[] for n in range(0, 100)]
	sorted_items = []
	for (item, key) in items_with_keys:
		buckets[key].append((key,item))
		#print(buckets)
	
	#print("sorting ....")
	for bucket in buckets:
		sorted_items.extend(bucket)
		#print(sorted_items)
	#print("Sorting Successful..!")
	return sorted_items

def main():
	items_with_keys = [(21,56),(22,78),(23,59),(24,56),(25,98),(26,78),(27,45),(28,45),(29,56),(30,80)]
	sorted_items = bucket_sort(items_with_keys)
	#print(sorted_items)
	for e in sorted_items:
		print(e)
	
main()
