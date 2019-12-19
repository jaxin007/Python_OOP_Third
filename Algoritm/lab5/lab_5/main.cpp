/* C++11 */
#include <cstddef>
#include <iostream>
#include <windows.h>
using std::size_t;

#define N 4

/* ����. �������� ������� ��������� ��� N ������ */
struct Graph {
    unsigned int table[N][N];
};

/* ���� ������� ��������� ����� */
template <class Stream>
Stream& operator >> (Stream &in, Graph &graph) {
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            in >> graph.table[i][j];
        }
    }
    return in;
}

/* �������� */
bool is_digraph(const Graph &graph) {
    unsigned int marks[N] = { }; /* ������ ������������� ��������� ������ ������ */

    for (size_t i = 0; i < N; i++) {
        /* ��� ������ ������� */
        for (size_t j = i + 1; j < N; j++) {
            /* ���������� � ������� */
            if (graph.table[i][j]) {
                /* ���� j-�� ������� �������� */
                if (marks[i] % 2 == marks[j] % 2 && marks[j]) {
                    /* � ���� �������� ��������� � ������� � ��� ��������, �� ���� �� ���������� */
                    return false;
                } else {
                    /* ����� ��������� �������� ������� */
                    marks[j] = marks[i] + 1;
                }
            }
        }
    }
    /* ��������� ��� ������� */
    return true;
}

int main() {
    using namespace std;
    Graph graph;
    setlocale(LC_ALL, "Russian");
    cout << "������� ������� ��������� �����:" << endl;
    cin >> graph;
    cout << "���� �������� " << (is_digraph(graph) ? "" : "�� ") << "����������" << endl;
}
