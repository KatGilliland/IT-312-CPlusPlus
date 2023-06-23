# Cplusplus-Program

# Summarize the project and what problem it was solving
The purpose of this project was to develop an application that allows users to see how their investments will grow over time. To accomplish this, the program (which acted as an interactive system) took in user input and from the information shared, would output two static reports: one report displaying their year-end balances and year-end interest if monthly deposits are made and one displaying their year-end balances and year-end interest if no additional monthly deposits are made. To create these reports, the program took in the users' initial investment amount, monthly deposit, annual interest, and number of years and utilized calculations to show the user how their investments will grow over the number of years entered. 

# What did you do particularly well?
I feel that my biggest accomplishment in this project was getting the user input validation to work. As a new programmer, I haven't completed many fully functional programs and so getting this last piece of code to run was very rewarding. 

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
I think in general, my code could be more streamlined. For example, I broke the user input validation into two functions when it most likely could've been done using only one. Small changes such as this make code easier to read and help it run more efficiently. 

# Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
The user input validation was the most challenging to write but the most rewarding when finally completed. My biggest challenge was making it so that the program would only accept numerical values while also prompting the user to enter a valid input. The way I overcame this was by breaking up the user input into two functions: one named "isNumber" that verified if the input was an interger or not and another named "userInput" that ran a while loop referencing "isNumber." One tool that I used throughout this project that I will continue to use is searching error codes. Error codes can give a definitive reason as to why something in the code isn't working and help take the complexity out of finding a solution.

# What skills from this project will be particularly transferable to other projects or course work?
While creating this program I was able to minimize the main function by creating a class that contained all my indiviudal functions, this allowed my code to run a lot smoother and more efficiently than my other two projects in this course, where I had trouble implementing classes. I think minimizing the main function will be essential to any program I work on moving forward. 

# How did you make this program maintainable, readable, and adaptable?
All my function names are very descriptive of how the function operates and are in line with coding style guidelines and best practices. Further, I included industry standard comments to explain the purpose of my code and how everything works together; this makes the program more maintainable, readable, and adaptable. 
