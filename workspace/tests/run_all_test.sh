#!/bin/bash

# ./buildディレクトリ内の頭文字「test_」のファイルを探索
for file in ./build/test_*; do
  # 実行可能ファイルかどうか確認
  if [[ -x "$file" ]]; then
    # ./build/を除いたファイル名を取得
    filename=$(basename "$file")
    echo "~~~ $filename ~~~"
    # 実行ファイルを実行
    "$file"
  fi
done
