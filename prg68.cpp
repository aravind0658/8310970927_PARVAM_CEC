/*with task ID and task name using switch case create class update class and delete class*/
#include <iostream>
using namespace std;
class Task {
public:
    int taskID;
    string taskName;

    Task(int id, string name) : taskID(id), taskName(name) {}

    void display() {
        cout << "Task ID: " << taskID << ", Task Name: " << taskName << endl;
    }
};
class TaskManager {
private:
    Task* tasks[100];
    int taskCount;
public:


    TaskManager() : taskCount(0) {}

    void addTask(int id, string name) {
        if (taskCount < 100) {
            tasks[taskCount++] = new Task(id, name);
            cout << "Task added successfully." << endl;
        } else {
            cout << "Task list is full." << endl;
        }
    }

    void updateTask(int id, string newName) {
        for (int i = 0; i < taskCount; i++) {
            if (tasks[i]->taskID == id) {
                tasks[i]->taskName = newName;
                cout << "Task updated successfully." << endl;
                return;
            }
        }
        cout << "Task not found." << endl;
    }

    void deleteTask(int id) {
        for (int i = 0; i < taskCount; i++) {
            if (tasks[i]->taskID == id) {
                delete tasks[i];
                tasks[i] = tasks[--taskCount];
                cout << "Task deleted successfully." << endl;
                return;
            }
        }
        cout << "Task not found." << endl;
    }

    void displayTasks() {
        if (taskCount == 0) {
            cout << "No tasks available." << endl;
            return;
        }
        for (int i = 0; i < taskCount; i++) {
            tasks[i]->display();
        }
    }
};
int main() {
    TaskManager manager;
    int choice, id;
    string name;

    do {
        cout << "Task Manager Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. Update Task\n";
        cout << "3. Delete Task\n";
        cout << "4. Display Tasks\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Task ID: ";
                cin >> id;
                cout << "Enter Task Name: ";
                cin.ignore();
                getline(cin, name);
                manager.addTask(id, name);
                break;
            case 2:
                cout << "Enter Task ID to update: ";
                cin >> id;
                cout << "Enter new Task Name: ";
                cin.ignore();
                getline(cin, name);
                manager.updateTask(id, name);
                break;
            case 3:
                cout << "Enter Task ID to delete: ";
                cin >> id;
                manager.deleteTask(id);
                break;
            case 4:
                manager.displayTasks();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}