#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(const string& desc, bool done = false) : description(desc), completed(done) {}
};

class TaskManager {
private:
    vector<Task> tasks;
    string filename;

public:
    TaskManager(const string& file) : filename(file) {
        loadTasks();
    }

    void addTask(const string& description) {
        tasks.push_back(Task(description));
    }

    void markTaskAsCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
        }
    }

    void listTasks() {
        for (int i = 0; i < tasks.size(); ++i) {
            cout << (i + 1) << ". ";
            if (tasks[i].completed) {
                cout << "[X] ";
            } else {
                cout << "[ ] ";
            }
            cout << tasks[i].description << endl;
        }
    }

    void saveTasks() {
        ofstream file(filename);

        if (file.is_open()) {
            for (const Task& task : tasks) {
                file << task.description << "|" << task.completed << endl;
            }

            file.close();
        }
    }

    void loadTasks() {
        ifstream file(filename);

        if (file.is_open()) {
            tasks.clear();
            string line;

            while (getline(file, line)) {
                size_t pos = line.find("|");
                if (pos != string::npos) {
                    string description = line.substr(0, pos);
                    bool completed = (line.substr(pos + 1) == "1");
                    tasks.push_back(Task(description, completed));
                }
            }

            file.close();
        }
    }
};

int main() {
    TaskManager taskManager("tasks.txt");
    int choice;

    do {
        cout << "Tarefas Pendentes:" << endl;
        taskManager.listTasks();
        cout << "Escolha uma opção:" << endl;
        cout << "1. Adicionar Tarefa" << endl;
        cout << "2. Marcar Tarefa como Concluída" << endl;
        cout << "0. Sair" << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Digite a descrição da tarefa: ";
                string description;
                cin.ignore();
                getline(cin, description);
                taskManager.addTask(description);
                taskManager.saveTasks();
                break;
            }
            case 2: {
                int index;
                cout << "Digite o número da tarefa a ser marcada como concluída: ";
                cin >> index;
                taskManager.markTaskAsCompleted(index - 1);
                taskManager.saveTasks();
                break;
            }
            case 0:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
