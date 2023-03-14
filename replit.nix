{ pkgs }: {
	deps = [
		pkgs.llvmPackages.clang-unwrapped
  pkgs.sudo
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}