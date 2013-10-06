# -*- coding: utf-8 -*-
module ReVIEW
  class HTMLBuilder
    def inline_fn(id)
      %Q(<a href="#fn-#{id}" class="footnotemark">*#{@chapter.footnote(id).number}</a>)
    end
  end
end
