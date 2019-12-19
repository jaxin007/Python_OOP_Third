/* C++11 */
#include <cstddef>
#include <iostream>
#include <windows.h>
using std::size_t;

#define N 4

/* Граф. Содержит таблицу смежности для N вершин */
struct Graph {
    unsigned int table[N][N];
};

/* Ввод таблицы смежности графа */
template <class Stream>
Stream& operator >> (Stream &in, Graph &graph) {
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            in >> graph.table[i][j];
        }
    }
    return in;
}

/* Алгоритм */
bool is_digraph(const Graph &graph) {
    unsigned int marks[N] = { }; /* пустой инициализатор заполняет массив нулями */

    for (size_t i = 0; i < N; i++) {
        /* для каждой вершины */
        for (size_t j = i + 1; j < N; j++) {
            /* перебираем её соседей */
            if (graph.table[i][j]) {
                /* если j-ая вершина соседняя */
                if (marks[i] % 2 == marks[j] % 2 && marks[j]) {
                    /* и если чётность совпадает с текущей и уже пройдена, то граф не двудольный */
                    return false;
                } else {
                    /* иначе установим чётность вершины */
                    marks[j] = marks[i] + 1;
                }
            }
        }
    }
    /* пробежали все вершины */
    return true;
}

int main() {
    using namespace std;
    Graph graph;
    setlocale(LC_ALL, "Russian");
    cout << "Введите матрицу смежности графа:" << endl;
    cin >> graph;
    cout << "Граф оказался " << (is_digraph(graph) ? "" : "НЕ ") << "двудольным" << endl;
}
