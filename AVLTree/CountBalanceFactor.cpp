void CountBalanceFactor (Element * node)
{
    if (node != NULL)
    {
        CountBalanceFactor(node->Llink);
        CountBalanceFactor(node->Rlink);
        node->BalanceFactor = getHeight(node->Llink) - getHeight(node->Rlink);
    }
}

int getHeight(Element * node)
{
    if (node == NULL)
        return 0;
    else
    {
        if (node->Llink == NULL && node->Rlink == NULL)
            return 1;
        else
        {
            int LHeight = getHeight(node->Llink);
            int RHeight = getHeight(node->Rlink);
            return 1+(LHeight > RHeight)?LHeight:RHeight;
        }
    }
}

