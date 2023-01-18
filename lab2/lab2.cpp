#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <typeinfo>
#include <string>

using namespace std;

// 1

void PrintVectorPart(vector <int> numbers) {
    auto it = numbers.begin();
    while (it != numbers.end()) {
        if (*it < 0) {
            while (it != numbers.begin()) {
                it--;
                cout << *it << " ";
            }
            break;
        }
        it++;
    }
    if (it == numbers.end()) {
        while (it != numbers.begin()) {
            it--;
            cout << *it << " ";
        }
    } 
}

void n1() {
    PrintVectorPart({ 4,3,67,-876,65 });
    cout << endl;
    PrintVectorPart({ -4,3,67,-876,65 });
    cout << endl;
    PrintVectorPart({ 4,3,67,876,65 });
    cout << endl;
}


// 2
template <typename T>
vector <T> FindGreaterElement(set<T> elements, T border) {
    vector <T> greater_than_border;
    for (T element : elements) {
        if (element > border){
            greater_than_border.push_back(element);
        }
    }
    sort(greater_than_border.begin(), greater_than_border.end());
    return greater_than_border;
}


void n2() {
    for (int x : FindGreaterElement(set<int>{1, 5, 7, 8}, 5) ) {
        cout << x << " ";
    }
    cout << endl;

    string to_find = "Python";

    cout << FindGreaterElement(set<string>{"C", "C++"}, to_find).size() << endl;
}



// 3
vector <string> SplitIntoWords(const string s) {
   string new_line = s;
   new_line += " ";
   auto it = begin(new_line);
   vector <string> words;
    
   while ((it + 1) != end(new_line)) {
       if (it == begin(new_line)) {
           auto first_space = find(it, end(new_line), ' ');
           string word(it, first_space);
           words.push_back(word);
           it = first_space;
        }
       else {
           auto first = find(it, end(new_line), ' ');
           first++;
           it = first;
           auto second = find(it, end(new_line), ' ');
           it = second;
           string word(first, second);
           words.push_back(word);
       }
    }
    return words;
}


void n3() {
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
}

// 4

template <typename T>
void RemoveDuplicates(vector <T> &elements) {
    sort(elements.begin(), elements.end());
    elements.erase(unique(elements.begin(), elements.end()), elements.end());

}


void n4() {
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
}

// 5

void n5() {
    int n;
    cout << "Input N:" << endl; 
    cin >> n;
    vector <int> numbers;

    for (int i = 1; i < n + 1; i++) {
        numbers.push_back(i);
    }
    
    reverse(numbers.begin(), numbers.end());

    do {
        for (auto n : numbers) {
            cout << n << " ";

        }
        cout << endl; 

    } while (prev_permutation(numbers.begin(), numbers.end()));
}

// 6

enum class Gender {
    FEMALE,
    MALE
};

struct Person {
    int age;
    Gender gender;
    bool is_employed;
};

template <typename InputIt>
int ComputeMedianAge(InputIt range_begin, InputIt range_end) {
	if (range_begin == range_end) return 0;
	
	vector<InputIt::value_type> some_vector(range_begin, range_end);

    sort(begin(some_vector), end(some_vector), [](const Person& left, const Person& right) {
        return left.age < right.age;
        }
    );
	auto half = begin(some_vector) + some_vector.size() / 2;
	
	return half->age;
}


void PrintStats(vector <Person> persons) {  
    
    cout << "Median age = " << ComputeMedianAge(begin(persons), end(persons))
        << endl;

    auto it = partition(begin(persons), end(persons),
        [](Person person) {
            return person.gender == Gender::FEMALE;
        });
    cout << "Median age for females = " << ComputeMedianAge(begin(persons), it) << endl;


    it = partition(begin(persons), end(persons),
        [](Person person) {
            return person.gender == Gender::MALE;
        });
    cout << "Median age for males = " << ComputeMedianAge(begin(persons), it) << endl;

    
    it = partition(begin(persons), end(persons),
        [](Person person) {
            return person.gender == Gender::FEMALE && person.is_employed;
        });
    cout << "Median age for employed females = " << ComputeMedianAge(begin(persons), it)
        << endl;

   
    it = partition(begin(persons), end(persons),
        [](Person person) {
            return person.gender == Gender::FEMALE && !person.is_employed;
        });
    cout << "Median age for unemployed females = "
        << ComputeMedianAge(begin(persons), it) << endl;

  
    it = partition(begin(persons), end(persons),
        [](Person person) {
            return person.gender == Gender::MALE && person.is_employed;
        });
    cout << "Median age for employed males = "
        << ComputeMedianAge(begin(persons), it) << endl;


    it = partition(begin(persons), end(persons),
        [](Person person) {
            return person.gender == Gender::MALE && !person.is_employed;
        });
    cout << "Median age for unemployed males = "
        << ComputeMedianAge(begin(persons), it) << endl;
}

void n6() {
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

// 7_1

template <typename RandomIt>
void MergeSortTwo(RandomIt range_begin, RandomIt range_end) {
    
    if (range_end - range_begin > 1) {
        vector<typename RandomIt::value_type> elements(range_begin, range_end);
        auto half = elements.begin() + elements.size() / 2;
     
        MergeSortTwo(begin(elements), half);
        MergeSortTwo(half, end(elements));
       
        merge(begin(elements), half, half, end(elements), range_begin);
    }
    return;
}

void n7_1() {
    vector <int> v = { 6,4,7,6,4,4,0,1 };
    MergeSortTwo(begin(v), end(v));
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

// 7_2

template <typename RandomIt>
void MergeSortThree(RandomIt range_begin, RandomIt range_end) {
    if (range_end - range_begin > 1) {
        vector<typename RandomIt::value_type> elements(range_begin, range_end);

        auto first_border = elements.begin() + elements.size() / 3;
        auto second_border = first_border + elements.size() / 3;


        
        MergeSortThree(begin(elements), first_border);
        MergeSortThree(first_border, second_border);
        MergeSortThree(second_border, end(elements));
       
        vector<typename RandomIt::value_type> temp_vect;
        

        merge(begin(elements), first_border, first_border, second_border, back_inserter(temp_vect));
        merge(begin(temp_vect), end(temp_vect), second_border, end(elements), range_begin);
    }
    return;
}

void n7_2() {
    vector<int> v = { 6,4,7,6,4,4,0,1,5 };
    MergeSortThree(begin(v), end(v));
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}


void n9_1() {
    string n, line;
    int count;
    cin >> n >> count;
    vector <string> data;
    cin.ignore();
    data.push_back(n);

    for (int i = 0; i < count; ++i) {
        getline(cin, line);

        data.push_back(") ");
        data.insert(data.begin(), "(");
        data.push_back(line);
    }

    for (auto elem : data) {
        cout << elem;
    }
}

bool has_priority(string prev,char next) {
    

    if ((next == '*' || next == '/') && (prev == "+" || prev == "-"))
        return true;

    return false;

}

void n9_2() {
    string n, line;
    int count;
    cin >> n >> count;
    vector <string> data;
    cin.ignore();
    data.push_back(n);
    string operation_sign = "*";
    for (int i = 0; i < count; ++i) {
        getline(cin, line);

        if (has_priority(operation_sign, line[0])) {
            data.push_back(")");
            data.insert(data.begin(), "(");
        }

        operation_sign = line[0];
        data.push_back(" " + line);
    }

    for (auto elem : data) {
        cout << elem;
    }
}

template <typename RandomIt>
pair<RandomIt, RandomIt> FindStartsWith(RandomIt range_begin, RandomIt range_end,char prefix) {
    string result = " ";
    result[0] = prefix;
    auto it1 = lower_bound(range_begin, range_end, result);
    ++result[0];
    auto it2 = lower_bound(range_begin, range_end, result);
    return make_pair(it1, it2);
}

void n10_1() {
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

template <typename RandomIt>
pair<RandomIt, RandomIt> FindStartsWith2(RandomIt range_begin, RandomIt range_end, const string& prefix) {

    if (prefix.size() == 0) {
        return make_pair(range_begin, range_begin);
    }

    auto it1 = lower_bound(range_begin, range_end, prefix);

    string result = prefix;

    result[result.size() - 1] = ++result[result.size() - 1];


    auto it2 = lower_bound(range_begin, range_end, result);
    return make_pair(it1, it2);
}



void n10_2() {
    const vector<string> sorted_strings = { "moscow", "modsffsdfsd", "murmansk" };
    const auto mo_result = FindStartsWith2(begin(sorted_strings), end(sorted_strings), "mo");

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


int main()
{
    n10_2();
}