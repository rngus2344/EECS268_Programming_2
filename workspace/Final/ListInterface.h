#ifndef LISTINTERFACE_H
#define LISTINTERFACE_H

template <typename T>
class ListInterface
{
  public:
  virtual ~ListInterface() {}
  virtual void insert(int index, T entry) = 0;
  virtual void remove(int index) = 0;
  virtual T getEntry(int index) const = 0;
  virtual void clear() = 0;
  virtual void setEntry(int index, T entry) = 0;
};
#endif
