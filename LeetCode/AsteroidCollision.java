/* Problem link : https://leetcode.com/problems/asteroid-collision/ */

import java.util.*;

class Solution {
    public int[] asteroidCollision(int[] asteroids) {
    
      
        Stack<Integer> stack=new Stack<>();
        for(int i=0;i<asteroids.length;i++)
        {
        if(stack.isEmpty() || (stack.peek()*asteroids[i] > 0) || (stack.peek() < 0 && asteroids[i] > 0 ))
        {
            stack.push(asteroids[i]);
             
        }
        else
        {  while(!stack.isEmpty() && stack.peek()*asteroids[i] < 0 ){
              int sp=Math.abs(stack.peek());   
            int ap=Math.abs(asteroids[i]);   
            if(sp > ap)
            { 
              break;
            }
            else if(sp < ap)
            {
            stack.pop();
               if(stack.isEmpty() || stack.peek()*asteroids[i] > 0)
               {
                     stack.push(asteroids[i]);
               }
            }
            else
            {   stack.pop();
                break;
            }
        }
        }
        }
        
          int [] arr=new int[stack.size()];
        int j=0;
          while(!stack.isEmpty())
          {
             arr[stack.size()-j-1]= stack.peek();
              stack.pop();
          }
        return arr;
              }
     }
