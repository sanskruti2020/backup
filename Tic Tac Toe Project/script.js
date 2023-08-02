console.log("welcome to Tic Tac Toe");

let music = new Audio("music3.mp3");           // background music - game playing
let turnmusic = new Audio("ting.mp3");
let gameovermusic = new Audio("gameover.mp3");
let turn = "X";
let gameover = false;

const changeturn = () => {
    return turn === "X" ? "0" : "X";    // if turn = X then return 0    else     return X
}

// function to check for win
const checkWin = () => {
    let boxtexts = document.getElementsByClassName("boxText");
    let wins = [
        [0, 1, 2],
        [3, 4, 5],
        [6, 7, 8],
        [0, 3, 6],
        [1, 4, 7],
        [2, 5, 8],
        [0, 4, 8],
        [2, 4, 6]
    ]
    wins.forEach(e => {
        if ((boxtexts[e[0]].innerText === boxtexts[e[1]].innerText) && (boxtexts[e[2]].innerText === boxtexts[e[1]].innerText) && (boxtexts[e[2]].innerText !== "")) {
            document.querySelector(".info").innerText = boxtexts[e[0]].innerText + " Won";
            gameover = true;
            // activating gif
            document.querySelector(".imgbox").getElementsByTagName('img')[0].style.width = "200px";
        }

    })
}

//  game logic
music.play();
let boxes = document.getElementsByClassName("box");
Array.from(boxes).forEach(element => {
    let boxtext = element.querySelector(".boxText");       // span vala part
    element.addEventListener('click', () => {
        if (boxtext.innerText === '') {
            boxtext.innerText = turn;          // if clicked write X there 
            turn = changeturn();
            turnmusic.play();
            checkWin();
            if (!gameover) {
                document.getElementsByClassName("info")[0].innerText = "Turn For " + turn;
            }
        }
    })
})

// Add on click listner to reset button
reset.addEventListener('click', () => {
    let boxtext = document.querySelectorAll(".boxText");
    Array.from(boxtext).forEach(element => {
        element.innerText = "";
    });
    turn = "X";
    if (!gameover) {
        document.getElementsByClassName("info")[0].innerText = "Turn For " + turn;
    }
    gameover = false;
    document.querySelector(".imgbox").getElementsByTagName('img')[0].style.width = "0px";
})