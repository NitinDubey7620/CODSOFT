#include <iostream>
#include <vector>
#include <string>
using namespace std;
// CodSoft C++ internship Task - 4
// To-Do List Manager by Nitin Dubey

class Task {
public:
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& desc) {
        tasks.emplace_back(desc);
        cout << "Task added: " << desc << endl;
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
            return;
        }

        cout << "Your Tasks:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". [" << (tasks[i].completed ? "✓" : " ") << "] " << tasks[i].description << endl;
        }
    }

    void markTaskCompleted(size_t index) {
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number." << endl;
            return;
        }
        tasks[index - 1].completed = true;
        cout << "Task marked as completed: " << tasks[index - 1].description << endl;
    }

    void removeTask(size_t index) {
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number." << endl;
            return;
        }
        cout << "Task removed: " << tasks[index - 1].description << endl;
        tasks.erase(tasks.begin() + index - 1);
    }
};

int main() {
    cout << "Welcome to the To-Do List Manager\n";
    
    ToDoList todoList;
    int choice;
    string taskDesc;
    size_t taskNum;

    do {
        cout << "\n1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear newline character from input buffer

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                getline(cin, taskDesc);
                todoList.addTask(taskDesc);
                break;
            case 2:
                todoList.viewTasks();
                break;
            case 3:
                cout << "Enter task number to mark as completed: ";
                cin >> taskNum;
                todoList.markTaskCompleted(taskNum);
                break;
            case 4:
                cout << "Enter task number to remove: ";
                cin >> taskNum;
                todoList.removeTask(taskNum);
                break;
            case 5:
                cout << "Exiting the To-Do List Manager.\n";
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
