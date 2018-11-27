package linkedlist;

public class Node<T> {
		public T data=null;
		public Node<T> next=null;
		
		T getData() {
			return data;
		}
		
		void setData(T data) {
			this.data =data;
		}
		
		Node<T> getNext() {
			return next;
		}
		
		void setNext(Node<T> next) {
			this.next= next;
		}
	
}
