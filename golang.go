package main

import (
	"fmt"
	"regexp"
	"strings"
)

func main() {
	str := strings.Repeat("b", 500000)
	str = str + "a"
	var reg = regexp.MustCompile(`b+$`)
	fmt.Println(reg.MatchString(str))
}
