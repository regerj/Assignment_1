# Assignment_1: Tax Calculator
Hey Ava, heres my adapted Assignment 1 for you! I wrote the problem description here, and in this repo will be some skeleton code for getting started.

## Overview
This program is a tax calculator. It will calculate three things for the user:
- Gross annual income
- Taxes owed
- Net income

## Description
Imagine we have a car saleseman. She only sells one model of car to every customer for simplicity. She gets paid in two different ways:
- Base salary
- Commission from car sales

She can also lose money via misconducts, which are deducted from her pay.

Finally, she can file for multiple states, and for multiple years. Follow this table below to know how much each state taxes for each year:

### State A
State A is simple. For the year 2017, everyone pays 6%. For the year 2018, everyone pays 8%.

### State B
State B is a bit more complicated. It introduces base taxes and tax brackets. The below tables will help you.

#### 2017
|Tax Bracket|<2,000|2,000-10,000|>10,000|
|-|-|-|-|
|Tax Paid|0|100|100 + 10% over 10,0000|

#### 2018
|Tax Bracket|<2,500|2,500-10,000|>10,000|
|-|-|-|-|
|Tax Paid|0|115|115 + 10.5% over 10,0000|

### State C
State C is similar to State B, but with taxes on the lowest bracket as well. The below tables will help you.

#### 2017
|Tax Bracket|<3,500|3,500-9,000|9,000-125,000|>125,000|
|-|-|-|-|-|
|Tax Paid|5%|175 + 7% over 3,500|560 + 9% over 9,000|11,000 + 9.9% over 125,000|

#### 2018
|Tax Bracket|<3,450|3,450-8,700|8,700-125,000|>125,000|
|-|-|-|-|-|
|Tax Paid|5%|172.5 + 7% over 3,450|540 + 9% over 8,700|11,007 + 9.9% over 125,000|

### Salary
This car salesman can choose what months she works through the year. So you will need to take user input for the number of months worked during the year, along with her monthly salary. You can use this to calculate her annual base salary.

### Commission
On top of this, she also makes commission based on her car sales. To calculate how much this is, you will need to know the cost of the car she sells, which she will need to provide to your program. Next you will need to know how many of those cars she sold this year. However, shes a car salesman, and they never sell it at manufacturer price. They will sell it at a slight profit. This profit will be between 6-10 % the cost of the car. You will use a random number generator to generate a random percent between 6 and 10 which will represent the average profit on each car sale. The car salesman recieves a commission of 2 % of that profit, the rest will go to her employer.

So to recap, the profit on car sales is 6-10 % the cost of the car multiplied by the number of cars sold. Of that total profit from car sales, the salesman will receive 2 %. For example, if the car costs 100 dollars, the average profit on the car sale is 10%, and she sells 5 cars, that means that she made a profit of (0.10 * 100) * 5 = $50. Of that $50 in profit, she receives 2% so: 50 * 0.02 = $1.

### Misconducts
If a misconduct is observed, her pay is docked by $100. Each misconduct after that doubles the amount her pay is docked. She will need to provide you with the number of misconducts she had. For example, if she had 1 misconduct, it would cost her $100, if she had 2 misconducts, it would cost her $200, and if she had 3 misconducts, it would cost her $400.

### Outputs
You will need to provide the user with their gross income:

Monnths worked * monthly salary + commission - misconduct charges

You will also need to provide the user with their taxes owed, as calculated from the tables earlier.

Finally you will need to provide them with their net income, which is their gross income minus their taxes owed.

Good luck, dm me with questions!
