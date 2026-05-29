const word = "ABCCED";

let board = [
    ["A","B","C","E"],
    ["S","F","C","S"],
    ["A","D","E","E"]
];

let isFound = false;

for (let r = 0; r < board.length; r++) {
    for (let c = 0; c < board[0].length; c++) {
        // If we find a match, stop searching
        if (board[r][c] === word[0] && dfs(r, c, 0)) {
            isFound = true;
            break; 
        }
    }
    if (isFound) break;
}

console.log(isFound); 

function dfs(r, c, i) {

    if (i === word.length) {
        return true; 
    } 
    
    if (r >= board.length || r < 0 || c < 0 || c >= board[0].length || board[r][c] !== word[i]) {
        return false; 
    }

    board[r][c] = "#";

    let result = dfs(r + 1, c, i + 1) || 
                 dfs(r - 1, c, i + 1) || 
                 dfs(r, c + 1, i + 1) || 
                 dfs(r, c - 1, i + 1);
    

    board[r][c] = word[i];
    

    return result; 
}