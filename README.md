# Spam Mail Detector

This is a simple spam mail detector mini-project implemented in C++. The program aims to filter out duplicate spam emails from a list of user emails. It uses a linked list data structure to store emails and ensures that only non-duplicate emails are included in the mailbox.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Implementation](#implementation)
- [How it Works](#how-it-works)
- [Installation](#installation)
- [Contributing](#contributing)
- [License](#license)

## Introduction

In today's world, spam emails can be a significant issue for users, cluttering their mailboxes and making it difficult to find important emails. This spam mail detector project offers a simple solution to this problem by efficiently filtering out duplicate spam emails from the mailbox.

## Usage

1. Compile and run the C++ program.
2. Input the number of emails you want to filter.
3. Enter the email ID and content for each email.
4. The program will display the filtered mailbox, excluding any duplicate spam emails.

## Implementation

- The project is implemented in C++ programming language.
- It uses a linked list data structure to store email nodes.
- A nested unordered_map is used to keep track of seen email content and mail IDs, filtering out duplicate emails.

## How it Works

1. The program takes input from the user for a specified number of emails.
2. Each email consists of an email ID (sender's email address) and the content of the email.
3. It uses a nested unordered_map to keep track of seen email content for each mail ID.
4. If a new email is encountered with the same content and mail ID, it's considered spam and skipped.
5. Otherwise, the email is added to the mailbox, which is implemented as a linked list of email nodes.
6. The program then displays the filtered emails in the user's mailbox.

## Installation

1. Clone the repository or download the source code.
2. Make sure you have a C++ compiler installed on your system.
3. Compile the C++ program using the following command:
   g++ spam_mail_detector.cpp -o spam_mail_detector
4. Run the executable:
   ./spam_mail_detector

## Contributing

Contributions are welcome! If you find any bugs or have suggestions for improvement, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code for your purposes.

