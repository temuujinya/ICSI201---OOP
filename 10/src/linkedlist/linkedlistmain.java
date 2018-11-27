package linkedlist;



class LinkedList<T>{
	
Node<T> HeadNode=null;
	
	int length() {
		int total=0;
		Node<T> tempNode = HeadNode;
		while(tempNode!=null) {
			total++;
			tempNode = tempNode.getNext();
		}
		return total;
	}
	
	T get(int index) {
		Node<T> tempNode = HeadNode;
		for(int i=0; i<index; i++) {
			tempNode = tempNode.getNext();
		}
		return tempNode.getData();
	}
	
	void add(T t) {
		if(HeadNode ==null) {
			HeadNode = new Node<T>();
			HeadNode.data = t;
		}else {
		Node<T> tempNode = HeadNode;
		Node<T> newNode = new Node<T>();
			newNode.setData(t);
			newNode.setNext(null);;
		
			
		while(tempNode.getNext()!=null) {
			tempNode = tempNode.getNext();
		}
		tempNode.setNext(newNode);
		}
	}
	
	void insert(T t, int index) {
		if(length()<index) {
			System.out.println("Listiin urtaas ih index bna");
		}else {
			if(HeadNode ==null) {
				HeadNode = new Node<T>();
				HeadNode.data = t;
			}else {
			Node<T> tempNode = HeadNode;
			Node<T> newNode = new Node<T>();
				newNode.data = t;
				newNode.next=null;
				
			for(int i = 0; i<index; i++) {
				tempNode=tempNode.getNext();
			}
			newNode.setNext(tempNode.getNext());
			tempNode.setNext(newNode);
			HeadNode = tempNode;
			}
		}
	}
	
	void deleteFirstElement() {
		Node<T> tempNode = HeadNode;
		tempNode=tempNode.getNext();
		HeadNode = tempNode;
	}
	
	void deleteLastElement() {
		Node<T> tempNode = HeadNode;
		while(tempNode.getNext()!=null){
	        if(tempNode.getNext().getNext()==null){
	            tempNode.setNext(null);
	        }else{
	        tempNode=tempNode.getNext();}
	    }
	}
	void delete(int index) {
		Node<T> tempNode = HeadNode;
		if(tempNode == null) {
			System.out.println("list hooson bna");
		}else {
			if(length()<index) {
				System.out.println("urtaas ih index");
			}else {
				if(index ==1) {
					deleteFirstElement();
				}else if(index==length()){
					deleteLastElement();
				}else {
					for(int i = 1; i<index-1; i++) {
						tempNode=tempNode.getNext();
					}
					tempNode.setNext(tempNode.getNext().getNext());
					HeadNode = tempNode;
				}
			}
		}
	}
	
	void printAll() {
		Node<T> tempNode = HeadNode;
		if(tempNode == null) {
			System.out.println("list hooson bna");
		}else {
			while(tempNode!=null) {
				System.out.print(tempNode.getData()+" ");
				tempNode = tempNode.getNext();
			}
		}
	}
}
public class linkedlistmain<T> {	

//	Node<T> HeadNode = new Node<T>();
//	
//	int length() {
//		int total=0;
//		Node<T> tempNode = HeadNode;
//		while(tempNode.next!=null) {
//			total++;
//			tempNode = tempNode.next;
//		}
//		return total;
//	}
	public static void main(String args[]) {
		LinkedList<String> myList = new LinkedList<String>();
		myList.add("hi");
		System.out.println(myList.length());
		myList.add("hi");
		System.out.println(myList.length());
		myList.add("hi");
		System.out.println(myList.length());
		myList.printAll();
		myList.insert("bye",1);
		System.out.println("\n");
		myList.printAll();
		myList.delete(3);
		System.out.println("\n");
		myList.printAll();
		
	}
//	void add() {
//		
//	}
//	void insert(T t, int index) {
//		
//	}
//	
//	T get(int index);
//	
//	void delete(int index);
//	
//	int length();
}
