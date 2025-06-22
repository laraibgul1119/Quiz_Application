# Quiz Application 🧠✨

This repository features a C++ console-based Quiz Application designed to simplify the creation, management, and administration of quizzes. It supports various question types, including Multiple Choice Questions (MCQ), True/False, and Fill-in-the-Blanks. This application offers a practical solution to common challenges faced in manual quiz systems, making learning and assessment more efficient and accessible.

## The Problem with Manual Systems 📝❌

In traditional, manual quiz systems, educators and learners often encounter several inefficiencies:

*   **Time-Consuming Creation**: Manually drafting, formatting, and organizing questions for different quiz types can be a laborious and time-intensive process.
*   **Difficult Management**: Storing and retrieving a large pool of questions, ensuring variety, and avoiding repetition across multiple quizzes is challenging without a structured system.
*   **Error Prone**: Manual grading of quizzes is susceptible to human error, leading to inaccuracies in assessment.
*   **Lack of Interactivity**: Paper-based quizzes offer limited immediate feedback, hindering the learning process where instant reinforcement is crucial.
*   **Logistical Hurdles**: Distributing, collecting, and scoring physical quizzes requires significant logistical effort, especially for large groups.

## How This Application Helps (The Solution) ✅💡

This Quiz Application directly addresses these issues by providing an automated, digital platform:

*   **Streamlined Question Management**: Easily add, store, and categorize questions of different types (MCQ, True/False, Fill-in-the-Blanks) into a centralized data bank. No more sifting through piles of paper!
*   **Automated Quiz Generation**: Generate quizzes instantly with a specified number of questions, randomly selected from your question pool. This saves immense time and ensures diverse quizzes.
*   **Instant Scoring & Feedback**: Quizzes are automatically graded upon completion, providing immediate results to the user. This accelerates the learning cycle and reduces the burden of manual grading.
*   **Enhanced Learning Experience**: The interactive console interface allows users to attempt quizzes digitally, offering a dynamic way to test knowledge. Features like delaying questions provide flexibility for learners.
*   **Reduced Logistical Overhead**: Eliminate the need for printing, distributing, and collecting physical papers. The entire process is handled within the application, making it ideal for self-study or quick assessments.

By automating these processes, the Quiz Application transforms a tedious manual task into an efficient and engaging digital experience, making learning and assessment more accessible and less burdensome for everyone.

## Getting Started 🚀

To get a local copy of the Quiz Application up and running, follow these simple steps.

### Prerequisites

This project requires a C++ compiler that supports C++11 or later (e.g., GCC, Clang, MSVC).

*   **GCC (GNU Compiler Collection)**: If you are on a Linux-based system, you can typically install GCC using your package manager:
    ```bash
    sudo apt update
    sudo apt install build-essential
    ```
    On macOS, you can install Xcode Command Line Tools:
    ```bash
    xcode-select --install
    ```
    On Windows, you can use MinGW-w64 or Cygwin.

### Installation

1.  **Clone the repository**:
    ```bash
    git clone https://github.com/YOUR_USERNAME/Quiz-Application.git
    cd Quiz-Application
    ```
    *(Replace `YOUR_USERNAME` with your GitHub username and adjust the repository name if different.)*

2.  **Compile the source code**:
    Navigate to the root directory of the cloned repository in your terminal and compile the C++ files. Assuming you are using GCC, you can compile all `.cpp` files into an executable named `quiz_app`:
    ```bash
    g++ *.cpp -o quiz_app
    ```
    If you have a separate `String.cpp` file (as suggested by `../OOP/String.h`), ensure it is also included in the compilation. For example, if `String.cpp` is in an `OOP` directory parallel to your main project directory, you might compile like this:
    ```bash
    g++ *.cpp OOP/String.cpp -o quiz_app
    ```

## How to Run and What Happens 🏃‍♀️💨

Once compiled, you can run the application from your terminal:

```bash
./quiz_app
```

Upon execution, the application immediately presents you with a **main menu** in your console. This menu is your central hub for interacting with the Quiz Application. Here's a breakdown of what happens:

1.  **Main Menu Display**: The first thing you'll see is a clear menu with options like:
    *   `1 to store question in Question Data Bank`
    *   `2 to Print a Quiz`
    *   `3 to attempt a Quiz`
    *   `0 to exit`

2.  **User Interaction Loop**: The application then enters a loop, waiting for your input. You choose an option by typing the corresponding number and pressing Enter.

3.  **Adding Questions (Option 1)**: If you choose to add questions, a sub-menu appears, allowing you to select the type of question (MCQ, True/False, Fill-in-the-Blank). The application will then guide you through a series of prompts to input the question text, options (if applicable), the correct answer, and the marks for the question. These questions are stored in an in-memory 


question data bank, ready for quiz generation.

4.  **Printing a Quiz (Option 2)**: Selecting this option prompts you for the number of questions you want in the quiz. The application then randomly selects questions from your data bank and displays them on the console, along with their options (for MCQs and True/False) and assigned marks. This is useful for reviewing questions or creating study guides.

5.  **Attempting a Quiz (Option 3)**: This is the interactive quiz mode. Similar to printing, you specify the number of questions. The application then presents each question one by one. You input your answer, and the application moves to the next question. You also have the option to 


delay a question, pushing it to the end of the quiz to revisit later. Once all questions are answered, the application calculates and displays your total obtained marks out of the maximum possible marks.

6.  **Exiting the Application (Option 0)**: Choosing this option gracefully terminates the program.

The console interface provides clear prompts and feedback at each step, making the interaction intuitive and user-friendly. You'll always know what to do next and what the application is doing.

## Contributing 🤝

Contributions are what make the open-source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! ⭐ Thanks again!

1.  Fork the Project
2.  Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3.  Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4.  Push to the Branch (`git push origin feature/AmazingFeature`)
5.  Open a Pull Request

## License 📄

Distributed under the MIT License. See `LICENSE` for more information.


