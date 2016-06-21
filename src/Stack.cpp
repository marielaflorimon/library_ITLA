 * Stack.cpp
   *
   *  Created on: May 23, 2016
 - *      Author: raydelto
 + *      Author: raydelto y francis
   */
  
  #include "Stack.h"
  
  void Stack::push(Element* element)
  {
  	//TODO: Implement this method.
 +	
 +  if(lastElement == NULL){
 +         first Element = element;
 +         last Element = element;
 +
 +     }else{
 +         element ->setprevious(last element);
 +         last element = element;
 +     }
 +}
 +
 +Element* Stack::get(){
 +          if(last element == NULL){
 +            return NULL;
 +          }
 +          Element* return = last element;
 +         last element= last element -> getprevious();
 +          return  return ;
 +}
 +
 +Stack::Stack(){
 +       first Element  = NULL;
 +     last element = NULL;
 +}
 +	
 +	
 +	
 +	
  }
  
  Element* Stack::pop()
  {
  	//TODO: Implement this method.
 +	
 +	quantity++;
 +	if(firstElement == NULL){
 +		firstElement = element;
 +		lastElement = element;
 +	}else{
 +		lastElement->setnext(element);
 +		lastElement = element;
 +	}
 +}
 +
 +Elemento*tail::remove() {
 +	if(firstElement == NULL){
 +		return NULL;
 +	}
 +	cantidad--;
 +	Element* return = firstElement;
 +	firstElement = firstElement-> getnext();
 +	return return;
 +}
 +
 +	
  	return NULL;
  }
  
 @@ -23,3 +73,7 @@ Stack::Stack(): _last(NULL)
  
  }