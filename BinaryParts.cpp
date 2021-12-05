/*
Задача
https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/

A decimal number is called deci-binary if each of its digits is either 0 or 1 without any leading zeros.
For example, 101 and 1100 are deci-binary, while 112 and 3001 are not.
Given a string n that represents a positive decimal integer, 
return the minimum number of positive deci-binary numbers needed so that they sum up to n.

Input: n = "32"
Output: 3
Explanation: 10 + 11 + 11 = 32


На вход поступает некоторое число в диапазоне 1 <= n <= 10^5 в строковом формате.
Суть задачи в том что бы вывести минимально количество слогаемых состоящих только из нулей и единиц 
суммировав которые (по правилам 10й системы счисления) можно получить исходное число n

Решение очень простое
Суть алогоритма в поиске максимальной цифры в исходном числе - именно оно и является ответом.
Потому что в кажом слогаемом возможно увеличение максимум на еденицу для каждого разряда.

Input: n = "9"
Output: 9
Explanation: 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 = 9;


Input: n = "222222222"
Output: 2
Explanation: 1111111111 + 1111111111 = 222222222;

Input: n = "123"
Output: 3
Explanation: 111 + 11 + 1 = 123;
или
Explanation: 101 + 11 + 11 = 123;
*/



int minPartitions(string n) 
	{
        char max = '0';
        for(auto & c : n) if(c == '9') return 9; else if(c > max) max = c;
        return (max-48);
    };

