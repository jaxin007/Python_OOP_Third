#include <iostream>
#include <vector>

using namespace std;
typedef vector<int>  T_inums;
///////////////////////////////////////////////////////////////////////////////////
struct T_node
{
    int      data;
    T_node*  left;
    T_node*  right;
};
///////////////////////////////////////////////////////////////////////////////////
void make_node(T_node*& rp_node, int val)
{
    rp_node         = new T_node;
    rp_node->data   = val;
    rp_node->left   = 0;
    rp_node->right  = 0;
}
///////////////////////////////////////////////////////////////////////////////////
void sort_insert(T_node*& rp_tree, int val)
{
    if(rp_tree == 0)
    {
        make_node(rp_tree, val);
    }
    else if(val < rp_tree->data)
    {
        sort_insert(rp_tree->left, val);
    }
    else
    {
        sort_insert(rp_tree->right, val);
    }
}
///////////////////////////////////////////////////////////////////////////////////
void sort_insert(T_node*&  rp_tree, T_inums  inums)
{
    for(T_inums::const_iterator  it = inums.begin(); it != inums.end(); ++it)
    {
        sort_insert(rp_tree, *it);
    }
}
///////////////////////////////////////////////////////////////////////////////////
void reverse_sort_insert(T_node*&  rp_tree, int val)
{
    if(rp_tree == 0)
    {
        make_node(rp_tree, val);
    }
    else if(val < rp_tree->data)
    {
        reverse_sort_insert(rp_tree->right, val);
    }
    else
    {
        reverse_sort_insert(rp_tree->left, val);
    }
}
///////////////////////////////////////////////////////////////////////////////////
void reverse_sort_insert(T_node*&  rp_tree, T_inums  inums)
{
    for(T_inums::const_iterator  it = inums.begin(); it != inums.end(); ++it)
    {
        reverse_sort_insert(rp_tree, *it);
    }
}
///////////////////////////////////////////////////////////////////////////////////
bool are_specularly_similar(T_node*  p_treeA, T_node*  p_treeB)
{
    if(p_treeA == 0 && p_treeB == 0)
    {
        return true;
    }
    if(p_treeA == 0 || p_treeB == 0)
    {
        return false;
    }
    if(p_treeA->data != p_treeB->data)
    {
        return false;
    }
    return    are_specularly_similar(p_treeA->left, p_treeB->right)
           && are_specularly_similar(p_treeA->right, p_treeB->left);

}
///////////////////////////////////////////////////////////////////////////////////
int main()
{
    setlocale(LC_CTYPE, "ukr");
    T_inums  inums;
    inums.push_back(2);
    inums.push_back(7);
    inums.push_back(1);
    inums.push_back(8);
    inums.push_back(2);

    T_node*  p_tree_l = 0;
    sort_insert(p_tree_l, inums);

    T_node*  p_tree_r = 0;
    reverse_sort_insert(p_tree_r, inums);

    if(are_specularly_similar(p_tree_l, p_tree_r))
    {
        cout << "Äåðåâà äçåðêàëüíî ñõîæi.";
    }
    else
    {
        cout << "Äåðåâà äçåðêàëüíî íå ñõîæi.";
    }

    cout << endl;

    if(are_specularly_similar(p_tree_l, p_tree_l))
    {
       cout << "Äåðåâà äçåðêàëüíî ñõîæi.";
    }
    else
    {
        cout << "Äåðåâà äçåðêàëüíî íå ñõîæi.";
    }

    cout << endl;
    return 0;
}
