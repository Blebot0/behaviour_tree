#pragma once BEHAVIOUR_TREE_NODE_H

// by default null node value is given as parent ID
// null node ID is 0
// root node ID is 1
enum NODE_STATUS{

    SUCCESS = 1,
    FAILIURE = -1,
    RUNNING = 0,
    DEFAULT = -2
};


class Node
{
private:
    int status_;
    unsigned int parent_id_;
    unsigned int node_id_;
    int type_;
public:
    Node();
    ~Node();

    inline const int NodeStatus(){
        return status_;
    }

    inline void ResetNodeStatus(){
        status_ = NODE_STATUS::DEFAULT;
    }

    virtual int GetType() = 0;
};

