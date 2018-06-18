# -*- perl -*-
use strict;
use warnings;
use tests::tests;
check_expected ([<<'EOF']);
(rox-simple) begin
(rox-simple) open "mytest1"
(rox-simple) read "mytest1"
(rox-simple) try to write "mytest1"
(rox-simple) end
rox-simple: exit(0)
EOF
pass;
