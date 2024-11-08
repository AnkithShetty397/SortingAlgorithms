# Sorting Algorithms

This repository contains implementations of common sorting algorithms in C++. Each algorithm has its own strengths and weaknesses in terms of time and space complexity, making them suitable for different use cases. This README provides an overview of each sorting algorithm along with its time and space complexity and common use cases.

## Table of Contents

1. [Overview](#overview)
2. [Algorithms](#algorithms)
    - [Bubble Sort](#bubble-sort)
    - [Selection Sort](#selection-sort)
    - [Insertion Sort](#insertion-sort)
    - [Merge Sort](#merge-sort)
    - [Quick Sort](#quick-sort)
3. [Complexity Tables](#complexity-tables)

---

## Overview

The following tables summarize the time and space complexities of each sorting algorithm.

### Time Complexity

| Algorithm      | Best Case     | Average Case | Worst Case     |
|----------------|---------------|--------------|----------------|
| Bubble Sort    | O(n)          | O(n²)        | O(n²)          |
| Selection Sort | O(n²)         | O(n²)        | O(n²)          |
| Insertion Sort | O(n)          | O(n²)        | O(n²)          |
| Merge Sort     | O(n log n)    | O(n log n)   | O(n log n)     |
| Quick Sort     | O(n log n)    | O(n log n)   | O(n²)          |

### Space Complexity

| Algorithm      | Space Complexity | In-place Sorting |
|----------------|------------------|------------------|
| Bubble Sort    | O(1)             | Yes              |
| Selection Sort | O(1)             | Yes              |
| Insertion Sort | O(1)             | Yes              |
| Merge Sort     | O(n)             | No               |
| Quick Sort     | O(log n)         | Yes              |

---

## Algorithms

### 1. Bubble Sort

Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

- **Time Complexity:**  
  - Best Case: O(n) — when the array is already sorted  
  - Average Case: O(n²)  
  - Worst Case: O(n²)  
- **Space Complexity:** O(1) — In-place sorting  

- **Use Cases:**  
  - Primarily used for educational purposes due to its simplicity.  
  - Suitable for small datasets or partially sorted data.  
  - Not efficient for large datasets due to its O(n²) time complexity.  

---

### 2. Selection Sort

Selection Sort divides the list into a sorted and an unsorted region, repeatedly finding the smallest element in the unsorted region and moving it to the end of the sorted region.

- **Time Complexity:**  
  - Best Case: O(n²)  
  - Average Case: O(n²)  
  - Worst Case: O(n²)  
- **Space Complexity:** O(1) — In-place sorting  

- **Use Cases:**  
  - Useful when minimizing the number of swaps is important.  
  - Suitable for small datasets or where memory efficiency is more important than speed.  
  - Inefficient for large datasets due to O(n²) time complexity.  

---

### 3. Insertion Sort

Insertion Sort builds a sorted array one element at a time by repeatedly picking the next element and inserting it into the correct position among the previously sorted elements.

- **Time Complexity:**  
  - Best Case: O(n) — when the array is already sorted  
  - Average Case: O(n²)  
  - Worst Case: O(n²)  
- **Space Complexity:** O(1) — In-place sorting  

- **Use Cases:**  
  - Efficient for small or partially sorted datasets.  
  - Often used for sorting small arrays or as a part of more complex algorithms (like Timsort).  
  - Ideal when the input size is small or when the list is almost sorted.  

---

### 4. Merge Sort

Merge Sort is a divide-and-conquer algorithm that splits the array into halves, recursively sorts each half, and then merges the sorted halves back together.

- **Time Complexity:**  
  - Best Case: O(n log n)  
  - Average Case: O(n log n)  
  - Worst Case: O(n log n)  
- **Space Complexity:** O(n) — Requires additional memory for merging  

- **Use Cases:**  
  - Ideal for large datasets, especially when stability is required.  
  - Commonly used in external sorting (sorting large files that don’t fit into memory).  
  - Suitable for linked lists since it requires sequential access rather than random access.  

---

### 5. Quick Sort

Quick Sort is another divide-and-conquer algorithm. It selects a pivot element, partitions the array around the pivot, and recursively applies the same strategy to the partitions.

- **Time Complexity:**  
  - Best Case: O(n log n)  
  - Average Case: O(n log n)  
  - Worst Case: O(n²) — when the pivot is repeatedly the smallest or largest element  
- **Space Complexity:** O(log n) — In-place sorting with recursive calls  

- **Use Cases:**  
  - Fast and efficient for large datasets.  
  - Commonly used in applications where in-place sorting is crucial.  
  - Often preferred in general-purpose sorting due to its average-case efficiency, though care must be taken to avoid worst-case scenarios.  

---

## Conclusion

Each sorting algorithm has unique characteristics that make it suitable for different use cases:

- **Bubble Sort:** Best for small or partially sorted datasets; mainly educational.
- **Selection Sort:** Works well when minimizing the number of writes is important.
- **Insertion Sort:** Great for small, partially sorted datasets.
- **Merge Sort:** Suitable for large datasets and external sorting; guarantees O(n log n) performance.
- **Quick Sort:** One of the fastest for large datasets, though optimizations may be needed to avoid worst-case scenarios.

