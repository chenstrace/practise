const haveCommonAncestor = (element1, element2, maxLevel) => {
    if (element1 === document.documentElement || element1 === document.body ||
        element2 === document.documentElement || element2 === document.body) {
        return false;
    }

    function getAncestorLevel(element) {
        let level = 0;
        while (element.parentNode && element.parentNode !== document.documentElement &&
            element.parentNode !== document.body) {
            level++;
            element = element.parentNode;
        }
        return level;
    }

    let l1 = getAncestorLevel(element1);
    let l2 = getAncestorLevel(element2);
    const levelDiff = Math.abs(l1 - l2);
    if (levelDiff > maxLevel) {
        return false;
    }
    let currentElement1 = element1;
    for (let i = 0; i < maxLevel + 1; i++) {
        if (currentElement1.contains(element2)) {
            return true;
        }
        currentElement1 = currentElement1.parentNode;
        if (!currentElement1 ||
            currentElement1 === document.documentElement ||
            currentElement1 === document.body) {
            return false;
        }
    }
    return false;
}