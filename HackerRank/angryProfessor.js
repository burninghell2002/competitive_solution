/*Link to the question: https://www.hackerrank.com/challenges/angry-professor/problem

Question Statement:

A Discrete Mathematics professor has a class of students. Frustrated with their lack of discipline, he decides to cancel class if fewer than some number of students are present when class starts. Arrival times go from on time () to arrived late ().

Given the arrival time of each student and a threshhold number of attendees, determine if the class is canceled.

Input Format

The first line of input contains , the number of test cases.

Each test case consists of two lines.

The first line has two space-separated integers,  and , the number of students (size of ) and the cancellation threshold.
The second line contains  space-separated integers () describing the arrival times for each student.

Note: Non-positive arrival times () indicate the student arrived early or on time; positive arrival times () indicate the student arrived  minutes late.

For example, there are  students who arrive at times . Four are there on time, and two arrive late. If there must be  for class to go on, in this case the class will continue. If there must be , then class is cancelled.

Function Description

Complete the angryProfessor function in the editor below. It must return YES if class is cancelled, or NO otherwise.

angryProfessor has the following parameter(s):

k: the threshold number of students
a: an array of integers representing arrival times

*/

'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the angryProfessor function below.
function angryProfessor(k, a) {
let count = 0;
for(let i=0;i<a.length;i++){
    if(a[i]<=0){
        count++
    }
}

return count>=k? 'NO':'YES';

}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const t = parseInt(readLine(), 10);

    for (let tItr = 0; tItr < t; tItr++) {
        const nk = readLine().split(' ');

        const n = parseInt(nk[0], 10);

        const k = parseInt(nk[1], 10);

        const a = readLine().split(' ').map(aTemp => parseInt(aTemp, 10));

        let result = angryProfessor(k, a);

        ws.write(result + "\n");
    }

    ws.end();
}
