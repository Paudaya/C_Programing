def get_array_from_user(size):
    array = []
    for i in range(size):
        value = int(input(f"Enter element {i+1}: "))
        array.append(value)
    return array

def scalar_sum(arr):
    return sum(arr)

def vector_sum(arr1, arr2):
    return [a + b for a, b in zip(arr1, arr2)]

def vector_product(arr1, arr2):
    return [a * b for a, b in zip(arr1, arr2)]

def scalar_product_sum(arr1, arr2):
    product_arr = vector_product(arr1, arr2)
    return sum(product_arr)

# Get the size of the arrays from the user
size = int(input("Enter the size of the arrays: "))

# Get the elements of the first array from the user
print("Enter elements for the first array:")
array1 = get_array_from_user(size)

# Get the elements of the second array from the user
print("Enter elements for the second array:")
array2 = get_array_from_user(size)

# Perform the operations and display the results
print("Scalar Sum of Array 1:", scalar_sum(array1))
print("Scalar Sum of Array 2:", scalar_sum(array2))

vector_sum_result = vector_sum(array1, array2)
print("Vector Sum of Array 1 and Array 2:", vector_sum_result)

vector_product_result = vector_product(array1, array2)
print("Vector Product of Array 1 and Array 2:", vector_product_result)

scalar_product_sum_result = scalar_product_sum(array1, array2)
print("Scalar Product Sum of Array 1 and Array 2:", scalar_product_sum_result)
