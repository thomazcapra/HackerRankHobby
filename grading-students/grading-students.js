process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function solve(grades) {
    let result = new Array();

    grades.forEach((grade) => {
        if (grade >= 38 && grade % 5 >= 3) {
            result.push((Math.floor(grade / 5) + 1) * 5);
        } else {
            result.push(grade);
        }
    });

    return result;
}

function main() {
    var n = parseInt(readLine());
    var grades = [];
    for (var grades_i = 0; grades_i < n; grades_i++) {
        grades[grades_i] = parseInt(readLine());
    }
    var result = solve(grades);
    console.log(result.join("\n"));
}
