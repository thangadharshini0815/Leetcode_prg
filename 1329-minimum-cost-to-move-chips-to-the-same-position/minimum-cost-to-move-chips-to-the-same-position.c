int minCostToMoveChips(int* position, int positionSize) {
    int odd=0,even=0;
    for(int i=0;i<positionSize;i++){
        if(position[i]&1){
            odd++;
        }
        else{
            even++;
        }
    }
    return (odd>even)?even:odd;
}