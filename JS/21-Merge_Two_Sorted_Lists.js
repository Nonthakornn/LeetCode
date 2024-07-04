// function ListNode(val, next) {
//     this.val = (val===undefined ? 0 : val)
//     this.next = (next===undefined ? null : next)


/* TODo 
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
*/


var mergeTwoLists = function(list1, list2) {
    let curr = new ListNode();
    const dummy = curr;
    while(list1 && list2) {
        if(list1.val < list2.val) {
            curr.next = list1;
            list1 = list1.next; 
        } else {
            curr.next = list2
            list2 = list2.next;
        }
        curr = curr.next;
    }
    if(list1) {
        curr.next=list1;
    }
    if(list2) {
        curr.next=list2;
    }
    return dummy.next;
};
