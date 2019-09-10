package com.hp.algorithm.leaststep;

import java.util.HashMap;
import java.util.Map;

public class LeastSteps2Last
{

public static int[] leastSteps2Last(int[] input){
    if(input.length == 1){
        return input;
    }
    
    //对于1~input[0]的每种步数i，如果走i步后①超过终点则break；②刚到终点则记录路径并return；③没到终点，则基于走i补后的字数组继续调用本方法递归寻找路径
    //每次循环可以返回一个路径及其长度（超出长度的那次循环可能不会返回）再在返回的这些路径中取最小长度的路径,貌似用list就行哦，傻了
    Map<Integer, int[]> subSteps = new HashMap<Integer, int[]>();
    for(int i = 1; i <= input[0]; i++){
        //如果走i步还没到列表结尾，则再次调用走i步后的子列表继续走
        if(1 + i < input.length){
            int[] nextSubList = new int[input.length - i];
            //src:源数组  srcPos:源数组要复制的起始位置  dest:目的数组  destPos:目的数组放置的起始位置  length:要复制的长度
            System.arraycopy(input, i, nextSubList, 0, nextSubList.length);
            //基于走i步后的子数组再次调用本方法计算步数并返回
            int[] nextSteps = leastSteps2Last(nextSubList);
            
            //当前走i步的路径currSteps=input[0] + nextSteps
            int[] currSteps = new int[nextSteps.length + 1];
            currSteps[0] = input[0];
            System.arraycopy(nextSteps, 0, currSteps, 1, nextSteps.length);
            subSteps.put(i, currSteps);
        //如果走i步刚好到结尾，则直接将这个路径加入到map里以作最短路径对比
        }else if(1 + i == input.length){
            return new int[]{input[0],input[input.length-1]};
        }
        //如果走i步超出长度了，则不再尝试更大的步数跨度
        else if(1 + i > input.length){
            break;
        }
    };
    
    int[] leastSteps = null;
    int stepNum = Integer.MAX_VALUE;
    for(Map.Entry<Integer, int[]> entry : subSteps.entrySet()){
        if(entry.getValue().length < stepNum){
            leastSteps = entry.getValue(); 
            stepNum = entry.getValue().length;
        };
    }
    return leastSteps;
}
 
/**
 * @param args
 */
public static void main(String[] args)
{
    int[] case1 = new int[]{3,4,2,1,3,1};
    int[] case2 = new int[]{3};
    int[] case3 = new int[]{2,2,1};
    int[] case4 = new int[]{2,2,3,1};
    int[] steps = leastSteps2Last(case4);
    for(int i : steps){
        System.out.println(i);
    }}
