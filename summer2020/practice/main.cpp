public void insertNth(int data, int position)
{
  //create new node.
  Node node = new Node();
  node.data = data;
  node.nextNode = null;

  if (this.head == null)
  {
    //if head is null and position is zero then exit.
    if (position != 0)
    {
      return;
    }
    else
    { //node set to the head.
      this.head = node;
    }
  }
  if (head != null && position == 0)
  {
    node.nextNode = this.head;
    this.head = node;
    return;
  }
  Node current = this.head;
  Node previous = null;

  int i = 0;

  while (i < position)
  {
    previous = current;
    current = current.nextNode;

    if (current == null)
    {
      break;
    }
    i++;
  }
  node.nextNode = current;
  previous.nextNode = node;
}
