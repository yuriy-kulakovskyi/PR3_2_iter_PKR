#include <gtest/gtest.h>
#include "../functions/functions.h"

TEST(LinkedListTest, AppendTest) {
  Node* head = nullptr;
  append(head, 1);
  append(head, 2);
  append(head, 3);

  ASSERT_EQ(head->data, 1);
  ASSERT_EQ(head->next->data, 2);
  ASSERT_EQ(head->next->next->data, 3);
  ASSERT_EQ(head->next->next->next, nullptr);
}