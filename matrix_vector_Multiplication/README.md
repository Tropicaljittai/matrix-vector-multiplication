# matrix-vector-mult-benchmark

github link = https://github.com/regencode/matrix-vector-mult-benchmark
How to run:

For Windows:
Change the directory to where the folder in WSL(must have Make module installed)

Commands:

- make; ./main.out
- make run;
- make time;
- make space;
- make clear;
 
 # Time complexity:
 For the time complexity of this programin we will run the following command: make time; this will print out how long did it take for the program to perform the script.
  
![matrix vect mult](https://cdn.discordapp.com/attachments/734045662169137234/1049314276088762460/image.png)
![matrix vect mult](https://cdn.discordapp.com/attachments/734045662169137234/1049314297722962000/image.png)

Below is the graph displayed from desmos

![matrix graph](https://cdn.discordapp.com/attachments/734045662169137234/1049317502800384051/image.png)

# Space complexity

Running the main_b_space.c files, will execute a forever loop within the program. It is done by running the following command: make space; the files are then executed 3 times each with different input values (n = 1200 till n = 300, with 300 + or - with each passing one way or another.)


![matrix vect mult space](https://cdn.discordapp.com/attachments/734045662169137234/1049313194654580756/image.png))

These 4 results differences can be shown as below:

![space complex](https://cdn.discordapp.com/attachments/734045662169137234/1049313861020418068/image.png)

