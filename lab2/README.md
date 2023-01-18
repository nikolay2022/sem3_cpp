# lab2
[![en](https://img.shields.io/badge/lang-en-red.svg)](https://github.com/nikolay2022/sem3_c-/blob/main/lab2/README.md)
[![ru](https://img.shields.io/badge/lang-ru-green.svg)](https://github.com/nikolay2022/sem3_c-/blob/main/lab2/README.ru.md)

**Task 1:** Write a PrintVectorPart function that takes a vector of integers
numbers, which searches for the first negative number in it, and
prints to standard output all numbers to the left
found, in reverse order. If the vector does not contain negative
numbers, print all the numbers in reverse order.

**Code example**
```cpp
int main() {
     PrintVectorPart({6, 1, 8, -5, 4});
     cout << endl;
     PrintVectorPart({-6, 1, 8, -5, 4});
     cout << endl;
     PrintVectorPart({6, 1, 8, 5, 4});
     cout << endl;
}
```
**Conclusion**
```cpp
8 1 6

4 5 8 1 6

```

**Task 2:** Write a FindGreaterElements template function that accepts
a set of elements of type T and another border of type T, and
returning a vector of all elements of the set greater than border, in
ascending order.

**Code example**
```cpp
int main() {
     for (int x : FindGreaterElements(set<int>{1, 5, 7, 8}, 5)){
         cout << x << " ";
     }
     cout << endl;
    
     string to_find = "Python";
     cout << FindGreaterElements(set<string>{"C", "C++"}, to_find).size() << endl;
     return 0;
}
```
**Conclusion**
```cpp
7 8
0
```

**Assignment 3:** Write a SplitIntoWords function that splits a string into words based on
spaces. It is guaranteed that: the string is not empty, the string consists only of Latin letters and spaces, the first and last characters of the string are not spaces, the string does not contain two spaces in a row.
**Clue! It is recommended to search for the next space using the find algorithm and create the next word using the string constructor over two iterators.**

**Code example**
```cpp
int main() {
     string s = "C Cpp Java Python";
     vector <string> words = SplitIntoWords(s);
     cout << words.size() << endl;
     for (auto it = begin(words); it != end(words); ++it) {
         if (it != begin(words)) {
             cout << "/";
         }
         cout << *it;
     }
     cout << endl;
    
     return 0;
}
```
**Conclusion**
```cpp
C/Cpp/Java/Python
```

**Task 4:** Write a RemoveDuplicates template function that accepts by reference
elements vector of objects of type T and removes all duplicate elements from it. Order
the remaining elements can be anything.
It is guaranteed that objects of type T can be compared using the ==, !=, <and> operators.

**Code example**
```cpp
int main() {
     vector <int> v1 = { 6, 4, 2, 4, 4, 2, 6, 8, 3, 1, 8 };
     RemoveDuplicates(v1);
     for (int x : v1) {
         cout << x << " ";
     }
     cout << endl;

     vector <string> v2 = { "C", "C++", "C++", "C", "C++" };
     RemoveDuplicates(v2);
     for (const string& s : v2) {
         cout << s << " ";
     }
     cout << endl;
     return 0;
}
```
**Conclusion**
```cpp
6 4 7 0 1
C++C
```

**Task 5:** You are given a positive integer N not exceeding 9. Print all
permutations of numbers from 1 to N in reverse lexicographic order (see
example).
**Clue! The \<algorithm\> library contains ready-made functions to solve this problem.**

**Input**
```cpp
3
```
**Conclusion**
```cpp
3 2 1
3 1 2
2 3 1
2 1 3
1 3 2
1 2 3
```

**Task 6:** In this problem you need to calculate different demographics
indicators for a group of people. A person is represented by a Person structure:
```cpp
struct Person {
     int age;
     gender;
     bool is_employed;
};
```
The Gender type is defined as follows:
```cpp
enum class Gender {
     FEMALE,
     MALE
};
```
You need to write a PrintStats function that receives a vector of people,
calculating and outputting the median age for each of the following
groups of people:
     all people;
     all women;
     all mans;
     all busy women;
     all unemployed women;
     all busy men;
     all unemployed men.
    
All 7 numbers must be output in strict accordance with the format (see.
example).
```cpp
void PrintStats(vector<Person> persons);
```
By taking a vector by value (rather than by const reference), you get
the ability to modify its copy arbitrarily and thereby
easier to do the calculations.
**Clue! Use the partition.** algorithm

To calculate the median age of a group of people, you must
use the ComputeMedianAge function:
```cpp
template<typenameInputIt>
int ComputeMedianAge(InputIt range_begin, InputIt range_end);
```

**Code example**
```cpp
int main() {
     vector <Person> persons = {
         {31,Gender::MALE, false},
         {40,Gender::FEMALE, true},
         {24,Gender::MALE, true},
         {20,Gender::FEMALE, true},
         {80,Gender::FEMALE, false},
         {78,Gender::MALE, false},
         {10,Gender::FEMALE, false},
         {55,Gender::MALE, true},

     };
     PrintStats(persons);
}
```
**Conclusion**
```cpp
Median age = 40
Median age for females = 40
Median age for males = 55
Median age for employed females = 40
Median age for unemployed females = 80
Median age for employed males = 55
Median age for unemployed males = 78
```


**Task 7:** Write a MergeSort template function that takes two iterators
template type RandomIt and sorting the range given by them with
using merge sort. Garargues that:
iterators of RandomIt type are similar in functionality to iterators
vectors and strings, that is, they can be compared using the operators
<, <=, > and >=, as well as subtract and add with numbers;
sortable objects can be compared using the < operator.
```cpp
template <typename RandomIt>
void MergeSortThree(RandomIt range_begin, RandomIt range_end);
```

**Part 1. Implementation in 2 Parts**
Algorithm
The classic merge sort algorithm is as follows:
1. If the range contains less than 2 elements, exit the function.
2. Create a vector containing all elements of the current range.
3. Split the vector into two equal parts. (In this problem it is guaranteed that
the length of the transmitted range is a power of two, so that
A vector can always be split into two equal parts.)
4. Call the MergeSort function from each half of the vector.
5. Using the std::merge algorithm, merge the sorted halves,
writing the resulting sorted range instead of the original one.
You must implement exactly this algorithm and no other.

**Clue! To create a vector containing all elements of the current range (step 2
algorithm), you need to be able to find out the type of elements by the type of iterator, on
which he indicates. If the RandomIt iterator belongs to the standard
container (vector, string, set, dictionary...), underlying type
can be obtained using the expression typename RandomIt::value_type. So
Thus, it is guaranteed that you can create a vector in step 2 as follows:**
```cpp
vector<typename RandomIt::value_type> elements(range_begin, range_end);
```
**Code example**
```cpp
int main() {
     vector <int> v = { 6,4,7,6,4,4,0,1 };
     MergeSort(begin(v), end(v));
     for (int x : v) {
         cout << x << " ";
     }
     cout << endl;
}
```
**Conclusion**
```cpp
0 1 4 4 4 6 6 7
```

**Part 2. Implementation with 3 Parts**
Implement a merge sort by splitting the range into 3 equal parts,
not by 2. It is guaranteed that the length of the original range is a power of 3.
Accordingly, paragraphs 3–5 of the algorithm should be replaced by the following:
1. Break the vector into 3 equal parts.
2. Call the MergeSort function from each part of the vector.
3. Merge the first two-thirds of the vector using the merge algorithm, keeping
result into a temporary vector using back_inserter.
4. Merge the time vector from the previous point with the last third
vector from item 2, writing the resulting sorted range instead of
original.

**Code example**
```cpp
int main() {
     vector<int> v = { 6,4,7,6,4,4,0,1,5 };
     MergeSort(begin(v), end(v));
     for (int x : v) {
         cout << x << " ";
     }
     cout << endl;
}
```
**Conclusion**
```cpp
0 1 4 4 4 6 6 7
```

**Task 9:**

**Part 1**
Implement the construction of an arithmetic expression according to the following
scheme:
 initially there is an expression consisting of some integer x;
 at each step, some value is applied to the current expression
operation: add a number, subtract a number, multiply by a number
or division by a number; before applying the operation, the expression is always
must be enclosed in parentheses.
Example
Initially, there is the number 8, the corresponding expression: <br />
8 <br />
The operation of multiplying by 3 is applied to it, the expression is obtained
(8)*3 <br />
Then 6 is subtracted: <br />
((8) * 3) - 6 <br />
Finally, division by 1 occurs; final expression: <br />
(((8) * 3) - 6) / 1 <br />
Input format <br />
The first line contains the original integer x. In the second line
contains a non-negative integer N, the number of operations. In each
the next N lines contain another operation: <br />
adding the number a: + a;  or subtracting the number b: - b;  or multiplication by the number c: * c;  or division by the number d: / d.
The number of operations can be zero - in this case it is necessary
print the original number.<br />
Output Format
Output a single line — the constructed arithmetic
expression.<br />
Pay attention to the placement of spaces around the characters:<br />
each binary operation character (+, -, * or /) must be surrounded
exactly one space on each side: (8) * 3;<br />
the unary minus symbol (for negative numbers) doesn't need
extra space: -5;<br />
brackets and numbers don't need extra spaces.<br />
**Clue! To convert a number to a string, use the to_string function from the \<string\> library.**
    
**Example**
```cpp
8
3
* 3
- 6
/ 1
```
**Conclusion**
```cpp
(((8) * 3) - 6) / 1
```

**Part 2 No extra brackets**
Modify the solution of the previous part so that the previous
the expression was framed with brackets only when necessary, that is, only in
when the next operation has a higher priority than
previous.
**Input**
```cpp
8
3
* 3
- 6
/ 1
```
**Conclusion**
```cpp
(8 * 3 - 6) / 1
```
**Task 10: Grouping strings by prefix**

**Part 1 Grouping by symbol**
Write a function FindStartsWith:<br />
accepting a sorted set of strings as iterators
range_begin, range_end and one prefix character;<br />
returning a rangelines starting with a prefix character, in the form
pairs of iterators.
```cpp
template <typename RandomIt>
pair<RandomIt, RandomIt> FindStartsWith(RandomIt range_begin, RandomIt range_end,char prefix);
```
If the resulting range is empty, its bounds must indicate that
a place in the container where you can insert without breaking the sort order
any line that starts with a prefix character (similar to the algorithm
equal_range). It is guaranteed that strings consist only of lowercase Latin
letters and the prefix symbol is also a lowercase Latin letter.

The search should be carried out for logarithmic complexity −
for example, using binary search.
**Code example**
```cpp
int main() {
     const vector<string> sorted_strings = { "moscow", "murmansk", "vologda" };
     const auto m_result = FindStartsWith(begin(sorted_strings), end(sorted_strings), 'm');

     for (auto it = m_result.first; it != m_result.second; ++it) {
         cout << *it << " ";
     }
     cout << endl;

     const auto p_result = FindStartsWith(begin(sorted_strings), end(sorted_strings), 'p');

     cout << (p_result.first - begin(sorted_strings)) << " " <<
         (p_result.second - begin(sorted_strings)) << endl;

     const auto z_result = FindStartsWith(begin(sorted_strings), end(sorted_strings), 'z');
     cout << (z_result.first - begin(sorted_strings)) << " " <<
         (z_result.second - begin(sorted_strings)) << endl;
}
```
**Conclusion**
```cpp
moscow-murmansk
2 2
3 3
```
**Clue! You can add or subtract numbers to characters (char), thus obtaining
way the next or previous letters in alphabetical order. For example,
for the string s, the expression --s[0] will replace its first letter with the previous one.
Note that the expression 'a' + 1 is of type int and therefore may
you need to cast it to char using static_cast.**

**Part 1 Grouping by Prefix**
Write a more generic version of the FindStartsWith function,
which takes as a prefix an arbitrary string consisting of
lowercase Latin letters.
```cpp
template <typename RandomIt>
pair<RandomIt, RandomIt> FindStartsWith2(RandomIt range_begin, RandomIt range_end, const string& prefix);
```
**Code example**
```cpp
int main() {
     const vector<string> sorted_strings = { "moscow", "modsffsdfsd", "murmansk" };
     const auto mo_result = FindStartsWith(begin(sorted_strings), end(sorted_strings), "mo");

     for (auto it = mo_result.first; it != mo_result.second; ++it) {
         cout << *it << " ";
     }
     cout << endl;

     const auto mt_result = FindStartsWith2(begin(sorted_strings), end(sorted_strings), "mt");

     cout << (mt_result.first - begin(sorted_strings)) << " " <<
         (mt_result.second - begin(sorted_strings)) << endl;

     const auto na_result = FindStartsWith2(begin(sorted_strings), end(sorted_strings), "na");
     cout << (na_result.first - begin(sorted_strings)) << " " <<
         (na_result.second - begin(sorted_strings)) << endl;
}
```
**Conclusion**
```cpp
moscow motovilikha
2 2
3 3
```

---
